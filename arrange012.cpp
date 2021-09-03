int b[n];
            int x=0;
        for (int i=0 ; i<n ; i++)
        {
            
            if (a[i]==0)
            {
                b[x]=a[i];
                x++;
            }
        }
        for (int i=0 ; i<n ; i++)
            {
                
                if (a[i]==1)
                {
                    b[x]=a[i];
                    x++;
                }
            }
        for (int i=0 ; i<n ; i++)
        {
            if (a[i]==2)
            {
                b[x]=a[i];
                x++;
            }
        }
    for(int i=0 ; i<n ; i++)
    {
        a[i]=b[i];
    }

