/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSString, NSArray;

@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject> {

	HMFMessage* _message;

}

@property (copy,readonly) HMFMessage * message;                                   //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(BOOL)canInitWithMessage:(id)arg1 ;
+(id)policyClasses;
-(id)init;
-(HMFMessage *)message;
-(id)initWithMessage:(id)arg1 ;
-(id)logIdentifier;
-(NSArray *)attributeDescriptions;
-(BOOL)acceptWithPolicies:(id)arg1 error:(id*)arg2 ;
@end
