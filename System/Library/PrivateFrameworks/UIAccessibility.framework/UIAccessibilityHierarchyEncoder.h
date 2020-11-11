/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIAccessibility/UIAccessibility-Structs.h>
@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject {

	BOOL _shouldResolveRemoteElements;
	id _rootElement;
	UIAccessibilityElementTraversalOptions* _traversalOptions;

}

@property (nonatomic,retain) id rootElement;                                                         //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,retain) UIAccessibilityElementTraversalOptions * traversalOptions;              //@synthesize traversalOptions=_traversalOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldResolveRemoteElements;                                       //@synthesize shouldResolveRemoteElements=_shouldResolveRemoteElements - In the implementation block
-(id)rootElement;
-(void)setRootElement:(id)arg1 ;
-(void)setTraversalOptions:(UIAccessibilityElementTraversalOptions *)arg1 ;
-(void)setShouldResolveRemoteElements:(BOOL)arg1 ;
-(UIAccessibilityElementTraversalOptions *)traversalOptions;
-(BOOL)shouldResolveRemoteElements;
-(void)_resolveLeafElementsForRemoteElement:(id)arg1 rootElement:(id)arg2 addingToLeafElementDescriptions:(id)arg3 ;
-(CGRect)_convertAccessibilityFrameOfElement:(id)arg1 toViewSpaceOfContainer:(id)arg2 remoteParent:(id)arg3 ;
-(id)initWithRootElement:(id)arg1 traversalOptions:(id)arg2 ;
-(id)encodeWithError:(id*)arg1 ;
@end

