/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CVNLP/CVNLP-Structs.h>
@interface CVNLPTokenIDConverter : NSObject {

	unique_ptr<cvnlp::AbstractVocabulary, std::__1::default_delete<cvnlp::AbstractVocabulary> >* _vocabTokenizer;
	unsigned _bosTokenID;
	unsigned _eosTokenID;
	unsigned _unkTokenID;

}

@property (readonly) unsigned bosTokenID;              //@synthesize bosTokenID=_bosTokenID - In the implementation block
@property (readonly) unsigned eosTokenID;              //@synthesize eosTokenID=_eosTokenID - In the implementation block
@property (readonly) unsigned unkTokenID;              //@synthesize unkTokenID=_unkTokenID - In the implementation block
-(id)initWithResource:(id)arg1 andTokenType:(int)arg2 ;
-(void)enumerateTokenIDsForText:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)bosTokenID;
-(unsigned)eosTokenID;
-(unsigned)unkTokenID;
@end
