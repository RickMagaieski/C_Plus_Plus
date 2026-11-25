double highestTemp;
int zoneIndex, dayIndex;

int main()
{  
    double tempData[5][7] = {
    {72.5, 74.2, 71.8, 75.3, 76.1, 73.4, 70.9},
    {68.3, 69.5, 72.1, 74.8, 73.2, 71.6, 70.4},
    {77.2, 79.4, 81.6, 78.3, 85.7, 80.2, 76.8},
    {65.1, 67.3, 69.8, 70.5, 68.4, 66.9, 71.2},
    {73.8, 75.6, 78.2, 82.4, 79.1, 77.5, 74.3}};

    for (int count = 0; count < 5; count++)
    {
        if (count == 0)
            highestTemp = tempData[0][0];

        for (int count2 = 0; count2 < 7; count2++)
        {
            if (tempData[count][count2] > highestTemp)
            {
                highestTemp = tempData[count][count2];

                zoneIndex = count;
                dayIndex = count2;
            }
        }
    }
}