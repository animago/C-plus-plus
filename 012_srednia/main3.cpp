# i n c l u d e   < i o s t r e a m >  
  
 u s i n g   n a m e s p a c e   s t d ;  
  
 f l o a t   l i c z _ s r e d n i a ( f l o a t   d a n e [ ] , i n t   i l e )   / /   f u n k c j a   l i c z a c a   s r e d n i a   w p r o w a d z o n y c h   l i c z b .   l i c z _ s r e d n i a ( " w p r o w a d z o n e   l i c z b y " , " i l o s c   w p r o w a d z o n y c h   l i c z b " )  
 {  
         f l o a t   s r ,   s u m a = 0 ;   / /   z m i e n n e   Sr e d n i a   i   s u m a   w s z y s t k i c h   l i c z b .  
         f o r ( i n t   i = 0 ; i < i l e ; i + + )  
         {  
                 s u m a   + =   d a n e [ i ] ;   / /   s u m a   =   s u m a   +   d a n e [ i ] ,   l i c z y   s u m e   l i c z b .  
         }  
         s r   =   s u m a / i l e ;   / /   d z i e l i   s u m e   p r z e z   i l o s c   l i c z b   i   l i c z y   s r e d n i ? .  
         r e t u r n   s r ;   / /   z w r a c a m   s r e d n i ?   b o   j e s t   t o   f u n k c j a   t y p u   f l o a t .  
 }  
  
 f l o a t   w a r t o s c _ b e z ( f l o a t   x )   / /   f u n k c j a   l i c z a c a   w a r t o s c   b e z w z g l e d n ?   d a n e j   l i c z b y   x .  
 {  
         i f ( x < 0 )  
                 x = x * ( - 1 ) ;  
         r e t u r n   x ;  
 }  
  
 i n t   m a i n ( )  
 {  
         f l o a t   l i c z b y [ 5 ] , m ,   s r e d n i a ,   l i c z b a ;   / /   z m i e n n a   m   b ? d z i e   p r z e c h o w y w a ?   r ? ? n i c ?   m i ? d z y   Sr e d n i ?   l i c z b   a   k o n k r e t n i ?   l i c z b ?   w   i - t e j   s z u f l a d c e   z m i e n n e j   l i c z b y .  
         i n t   i l e ;  
  
         c o u t   < <   " I l e   l i c z b   c h c e s z   w p r o w a d z i c ? " < < e n d l ;  
         c i n   > >   i l e ;  
         c o u t   < <   " W p r o w a d z   l i c z b y :   " < < e n d l ;  
  
         f o r ( i n t   i = 0 ; i < i l e ; i + + )   / /   f u n k c j a   s ? u ? y   d o   w p r o w a d z a n i a   l i c z b   d o   p r o g r a m u .  
                 c i n   > >   l i c z b y [ i ] ;  
  
         s r e d n i a   =   l i c z _ s r e d n i a ( l i c z b y , i l e ) ;   / /   w y w o ? u j ?   f u n k c j ?   d o   l i c z e n i a   Sr e d n i e j   k t ? r e j   a r g u m e n t a m i   s ?   t a b l i c a   l i c z b   o r a z   z m i e n n a   z a w i e r a j ? c a   i n f o r m a c j e   o   i c h   i l o Sc i .  
  
         m = w a r t o s c _ b e z ( l i c z b y [ 0 ] - s r e d n i a ) ;   / /   t y m c z a s o w a   w a r t o S?   b e z w z g l ? d n a   r ? ? n i c y   m i ? d z y   Sr e d n i ?   i   l i c z b ?   w   z e r o w e j   s z u f l a d c e ,   d o   c z e g o S  t r z e b a   p ? xn i e j   p r z y r ? w n y w a ?  
  
         f o r ( i n t   i = 0 ; i < i l e ; i + + )   / /   p ? t l a   k t ? r e j   z a d a n i e m   j e s t   z n a l e z i e n i e   l i c z b y   k t ? r a   j e s t   n a j b l i ? s z a   Sr e d n i e j   i   z a p i s a n i e   j e j   d o   n o w e j   z m i e n n e j   " l i c z b a "  
                 i f ( w a r t o s c _ b e z ( l i c z b y [ i ]   -   s r e d n i a )   < =   m )   / /   j e Sl i   w a r t o S?   b e z w z .   r ? ? n i c y   i - t e j   l i c z b y   i   Sr e d n i e j   w s z y s t k i c h   l i c z b   j e s t   m n i e j s z a   o d   t y m c z a s o w e g o   m .   T e n   w a r u n e k   m a   z n a l e x?   l i c z b e   k t ? r e j   w y m i e n i o n a   w y ? e j   r ? ? n i c a   j e s t   j a k   n a j b l i ? s z a   z e r u .   i m   b l i ? e j   z e r a   t y m   l i c z b a   j e s t   b l i ? s z a   Sr e d n i e j  
                 {  
                         m = w a r t o s c _ b e z ( l i c z b y [ i ]   -   s r e d n i a ) ;   / /   j e Sl i   w a r u n e k   j e s t   s p e ? n i o n y   t o   z m i e n i a m   w a r t o S?   t y m c z a s o w e g o   m   n a   m n i e j s z ? .  
                         l i c z b a   =   l i c z b y [ i ] ;   / /   z a p i s u j e   l i c z b e   k t ? r a   d o   t e j   p o r y   j e s t   n a j b l i ? s z a   Sr e n i e j   d o   z m i e n n e j   l i c z b a .  
                 }  
  
         c o u t   < <   " S r e d n i a   w y n o s i :   " < < s r e d n i a < < e n d l ;  
         c o u t   < <   " L i c z b a   n a j b l i z e j   s r e d n i e j :   " < < l i c z b a ;  
  
  
         b o o l   s t a n = f a l s e ;   / /   n o w a   z m i e n n a   t y p u   l o g i c z n e g o   k t ? r a   p o s ? u ? y   j a k o   w a r u n e k   w   p ? t l i   p o n i ? e j .  
  
         f o r ( i n t   i = 0 ; i < i l e ; i + + )   / /   p ? t l a   m a   z a   z a d a n i e   s p r a w d z i ?   c z y   i s t n i e j e   j e s z c z e   j e d n a   l i c z b a   w   t a b l i c y   l i c z b y   k t ? r e j   r ? ? n i c a   z e   Sr e d n i ?   j e s t   t a k a   s a m a   j a k   l i c z b y   z n a l e z i o n e j   p o w y ? e j .   M o g ?   i s t n i e ?   m a k s y m a l n i e   d w i e   t a k i e   l i c z b y   w   c a ? e j   t a b l i c y ,   j e d n a   w i ? k s z a   o d   Sr e d n i e j   i   d r u g a   m n i e j s z a   o d   n i e j   o   t ?   s a m ?   w a r t o S? .  
         {  
                 i f ( w a r t o s c _ b e z ( l i c z b y [ i ]   -   s r e d n i a )   = =   m   & &   l i c z b y [ i ]   ! =   l i c z b a )   / / j e Sl i   w a r t o S?   b e z w z .   t e j   r ? ? n i c y   j e s t   t a k a   s a m a   j a k   t a   z n a l e z i o n a   p o w y ? e j   i   l i c z b y   n i e   s ?   t a k i e   s a m e  
                         s t a n = t r u e ;   / /   p r z e s t a w   n a   p r a w d e .  
                 i f ( s t a n = = t r u e )   / /   j e s l i   s t a n   z o s t a ?   p r z e s t a w i o n y ,   c z y l i   z o s t a ?   s p e ? n i o n y   w a r u n e k   z   i f a   p o w y ? e j .  
                 {  
                         c o u t   < < "   o r a z   "   < <   l i c z b y [ i ] ;   / /   d o p i s z   d o   p o d s u m o w a n i a   l i c z b ?   z n a l e z i o n ?   w   t e j   p ? t l i ,   b ? d z i e   o n a   z a w s z e   m n i e j s z a   o d   t e j   z n a l e z i o n e j   w   p ? t l i   p o w y ? e j .  
                         b r e a k ;   / /   p r z e r w i j ,   p o n i e w a ?   s k o r o   m o g ?   b y ?   m a k s y m a l n i e   d w i e   t a k i e   l i c z b y   t o   w i ? c e j   j u ?   n i e   z n a j d z i e m y .  
                 }  
         }  
  
  
  
         r e t u r n   0 ;  
 }  
 