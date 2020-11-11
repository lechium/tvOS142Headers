/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CHConfigurationDelegate.h>

@protocol CHConfigurationAggregatorDelegate, OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface CHConfigurationAggregator : NSObject <CHConfigurationDelegate> {

	id<CHConfigurationAggregatorDelegate> _delegate;
	NSArray* _configurations;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSArray * configurations;                                    //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CHConfigurationAggregatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCloudKitEnabled,nonatomic,readonly) BOOL cloudKitEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CHConfigurationAggregatorDelegate>)delegate;
-(void)setDelegate:(id<CHConfigurationAggregatorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isCloudKitEnabled;
-(NSArray *)configurations;
-(void)propertiesDidChangeForConfiguration:(id)arg1 ;
-(void)registerConfigurationDelegate;
-(id)initWithConfigurations:(id)arg1 queue:(id)arg2 ;
@end

