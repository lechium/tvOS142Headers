/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KGNodeChangeRequest.h>

@class NSArray, NSNumber, NSDictionary, KGNodePlaceholder;

@interface KGNodeCreationRequest : KGNodeChangeRequest {

	NSArray* _labels;
	NSNumber* _weight;
	NSDictionary* _properties;
	KGNodePlaceholder* _placeholderForNode;

}

@property (nonatomic,readonly) NSArray * labels;                                    //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) KGNodePlaceholder * placeholderForNode;              //@synthesize placeholderForNode=_placeholderForNode - In the implementation block
+(id)creationRequestWithLabels:(id)arg1 weight:(id)arg2 properties:(id)arg3 ;
-(id)properties;
-(id)weight;
-(void)setWeight:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(NSArray *)labels;
-(KGNodePlaceholder *)placeholderForNode;
@end
