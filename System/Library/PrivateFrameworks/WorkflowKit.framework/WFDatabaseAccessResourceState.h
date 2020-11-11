/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface WFDatabaseAccessResourceState : NSObject {

	NSString* _persistentIdentifier;
	NSData* _perWorkflowStateData;

}

@property (nonatomic,readonly) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * perWorkflowStateData;                //@synthesize perWorkflowStateData=_perWorkflowStateData - In the implementation block
-(NSString *)persistentIdentifier;
-(id)initWithPersistentIdentifier:(id)arg1 perWorkflowStateData:(id)arg2 ;
-(NSData *)perWorkflowStateData;
@end

