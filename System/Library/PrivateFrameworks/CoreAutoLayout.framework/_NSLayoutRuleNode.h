/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSLayoutRule, _NSLayoutRuleNodeParent;
@interface _NSLayoutRuleNode : NSObject {

	id<NSLayoutRule> _representedRule;
	id<_NSLayoutRuleNodeParent> _parentNode;

}

@property (copy) id<NSLayoutRule> representedRule;                      //@synthesize representedRule=_representedRule - In the implementation block
@property (assign) id<_NSLayoutRuleNodeParent> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
-(id)description;
-(void)dealloc;
-(id<_NSLayoutRuleNodeParent>)parentNode;
-(id)initWithRule:(id)arg1 ;
-(void)setParentNode:(id<_NSLayoutRuleNodeParent>)arg1 ;
-(id<NSLayoutRule>)representedRule;
-(void)setRepresentedRule:(id<NSLayoutRule>)arg1 ;
@end
