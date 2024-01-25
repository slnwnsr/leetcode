class Solution {
public:
    /* A bus has n stops numbered from 0 to n - 1 that form a circle. We know
    the distance between all pairs of neighboring stops where distance[i] is the
    distance between the stops number i and (i + 1) % n. The bus goes along both
    directions i.e. clockwise and counterclockwise.
    Return the shortest distance between the given start and destination
    stops.*/
    int distanceBetweenBusStops(vector<int>& distance, int start,
                                int destination) {
        int leftDist = 0;
        int rightDist = 0;
        int n = distance.size();

        printf("start = %d, destination = %d, n = %d\n", start, destination, n);

        // find the distance when going left
        // sum of elements from distance[start - 1] to distance[destination]
        for (int i = (start - 1 + n) % n; i != (destination - 1 + n) % n;
             i = (i - 1 + n) % n) {
            leftDist += distance[i];
            printf("Value of destination[%d] = %d\n", i, distance[i]);
            printf("Left distance = %d\n", leftDist);
        }
        printf("Final left distance = %d\n", leftDist);

        // find the distance for going right
        // sum of elements from distance[start] to distance[destination - 1]
        for (int j = (start) % n; j != destination; j = (j + 1) % n) {
            rightDist += distance[j];
            printf("Value of destination[%d] = %d\n", j, distance[j]);
            printf("Right distance = %d\n", rightDist);
        }
        printf("Final right distance = %d\n", rightDist);

        // return the least of leftDist or rightDist
        return min(leftDist, rightDist);

        /* this is what I thought of initially but better way to do this would 
        be calculate sum of all elements, find distance going right, then find 
        distance going left by doing sum - rightDist and then return min of those */
    }
};
