/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NLSearchParserManager : NSObject {

	void* _parser;

}
+(id)defaultManager;
+(id)availableLanguages;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3 ;
-(id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end
