/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _CDContextPersisting
@required
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2;
-(void)saveRegistration:(id)arg1;
-(void)deleteRegistration:(id)arg1;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg1;

@end

