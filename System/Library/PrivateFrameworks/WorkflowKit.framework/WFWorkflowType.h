/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/RLMObject.h>

@class NSString;

@interface WFWorkflowType : RLMObject {

	NSString* _type;

}

@property (copy) NSString * type;              //@synthesize type=_type - In the implementation block
+(id)primaryKey;
+(id)requiredProperties;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
@end

