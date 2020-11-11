/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSURL, NSArray, NSDictionary;

@interface WFPodcastShowObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {

	NSString* _title;
	NSString* _uuid;
	NSString* _storeId;
	NSURL* _feedURL;
	NSArray* _children;

}

@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * storeId;                               //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) NSURL * feedURL;                                  //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) NSArray * children;                               //@synthesize children=_children - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)childrenJSONTransformer;
-(NSArray *)children;
-(NSString *)title;
-(NSString *)uuid;
-(NSString *)storeId;
-(NSURL *)feedURL;
-(NSString *)wfName;
@end

