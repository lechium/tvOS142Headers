/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKPersistentStoreHandler : NSObject {

	 connection;

}
+(id)inMemoryHandler;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(BOOL)removeValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesMatching:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllValuesAndReturnError:(id*)arg1 ;
-(id)keysAndReturnError:(id*)arg1 ;
-(id)keysMatching:(id)arg1 error:(id*)arg2 ;
-(id)valuesAndReturnError:(id*)arg1 ;
-(id)valuesForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(id)keysAndValuesAndReturnError:(id*)arg1 ;
-(id)keysAndValuesForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(id)_valuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveKeysAndValues:(id)arg1 error:(id*)arg2 ;
-(id)tripleComponentsMatching:(id)arg1 error:(id*)arg2 ;
-(BOOL)setWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 toValue:(long long)arg4 error:(id*)arg5 ;
-(long long)increaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 ;
-(long long)decreaseWeightForLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 ;
-(BOOL)dropLinkWithLabel:(id)arg1 between:(id)arg2 and:(id)arg3 error:(id*)arg4 ;
-(BOOL)dropLinksWithLabel:(id)arg1 from:(id)arg2 error:(id*)arg3 ;
-(BOOL)dropLinksBetween:(id)arg1 and:(id)arg2 error:(id*)arg3 ;
@end

