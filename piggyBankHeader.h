#ifndef PIGGYBANKHEADER_
#define PIGGYBANKHEADER_

class PiggyBank
{
    public:
        PiggyBank();
        
        void setCoin(int);
        void getCoin();
        void checkCoin();
    private:
        int m_coinCents;
        int m_coinBank[25];        
};        
        

#endif /*PIGGYBANKHEADER_*/
