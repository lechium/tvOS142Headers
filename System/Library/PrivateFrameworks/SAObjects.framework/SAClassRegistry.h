/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SAClassRegistry : NSObject
+(void)initialize;
+(void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
+(Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
+(void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
+(id)sharedClassRegistry;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
@end

