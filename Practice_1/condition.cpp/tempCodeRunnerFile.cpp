int n;
    cin>>n;

    bool isprime=true;
    if(n<=0) cout<<"Not Prime";
    else{
        for(int i=2; i*i<=n; i++){   
            if (n%i==0) isprime=false;
            break;

        }
    }
    if(isprime){
        cout<<"Prime number";
    }
    else{
        cout<<"Not prime";
    }