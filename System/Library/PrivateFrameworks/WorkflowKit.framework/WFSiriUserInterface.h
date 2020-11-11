/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol WFSiriUserInterface <WFUserInterfaceHost>
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs; 
@property (nonatomic,readonly) long long executionContext; 
@required
-(long long)executionContext;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configureIntent:(id)arg1;
-(BOOL)isRunningInSiri;
-(NSArray *)airPlayRouteIDs;

@end

