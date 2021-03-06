/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSNumber, NSURL, NSDictionary, NSString;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing> {

	NSNumber* _postId;
	NSURL* _link;

}

@property (nonatomic,copy,readonly) NSNumber * postId;                           //@synthesize postId=_postId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * link;                                //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)postIdJSONTransformer;
+(id)linkJSONTransformer;
-(NSURL *)link;
-(NSNumber *)postId;
@end

