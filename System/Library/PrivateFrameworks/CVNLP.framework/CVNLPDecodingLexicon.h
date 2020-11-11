/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CVNLP/CVNLP-Structs.h>
@interface CVNLPDecodingLexicon : NSObject {

	const LXLexiconRef _lexicon;
	unsigned long long _priority;
	LXCursorRef __rootCursor;

}

@property (nonatomic,readonly) LXCursorRef _rootCursor;                  //@synthesize _rootCursor=__rootCursor - In the implementation block
@property (nonatomic,readonly) const LXLexiconRef lexicon;               //@synthesize lexicon=_lexicon - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
+(const LXLexiconRef)_createLexiconForLocale:(id)arg1 ;
+(id)decodingLexiconForLocale:(id)arg1 ;
+(id)decodingLexiconForLocale:(id)arg1 priority:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)priority;
-(const LXLexiconRef)lexicon;
-(id)initWithLexicon:(LXLexiconRef)arg1 ;
-(id)packagedLexiconCursorUsingTextDecodingContext:(id)arg1 ;
-(id)initWithLexicon:(LXLexiconRef)arg1 priority:(unsigned long long)arg2 ;
-(id)packagedLexiconRootCursor;
-(LXCursorRef)_rootCursor;
@end
