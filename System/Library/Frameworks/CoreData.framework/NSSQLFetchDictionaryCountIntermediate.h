/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {

	NSSQLFetchIntermediate* _realFetch;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithFetchIntermediate:(id)arg1 inScope:(id)arg2 ;
@end
