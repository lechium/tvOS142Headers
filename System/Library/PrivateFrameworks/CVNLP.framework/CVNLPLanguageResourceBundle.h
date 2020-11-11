/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CVNLPDecodingLexicons, CVNLPDecodingLanguageModel;

@interface CVNLPLanguageResourceBundle : NSObject {

	CVNLPDecodingLexicons* _lexicons;
	CVNLPDecodingLanguageModel* _characterLanguageModel;
	CVNLPDecodingLanguageModel* _wordLanguageModel;

}

@property (nonatomic,readonly) CVNLPDecodingLexicons * lexicons;                                 //@synthesize lexicons=_lexicons - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * characterLanguageModel;              //@synthesize characterLanguageModel=_characterLanguageModel - In the implementation block
@property (nonatomic,readonly) CVNLPDecodingLanguageModel * wordLanguageModel;                   //@synthesize wordLanguageModel=_wordLanguageModel - In the implementation block
-(CVNLPDecodingLanguageModel *)characterLanguageModel;
-(CVNLPDecodingLexicons *)lexicons;
-(id)packagedLexiconRootCursors;
-(id)initWithLexicons:(id)arg1 characterLanguageModel:(id)arg2 wordLanguageModel:(id)arg3 ;
-(id)packagedLexiconCursorsUsingContext:(id)arg1 ;
-(CVNLPDecodingLanguageModel *)wordLanguageModel;
@end

