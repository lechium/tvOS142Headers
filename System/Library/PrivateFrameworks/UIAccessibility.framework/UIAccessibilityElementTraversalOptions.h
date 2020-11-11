/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface UIAccessibilityElementTraversalOptions : NSObject {

	BOOL _shouldReturnScannerGroups;
	BOOL _shouldOnlyIncludeElementsWithVisibleFrame;
	BOOL _shouldIncludeKeyboardObscuredElements;
	BOOL _shouldUseAllSubviews;
	BOOL _includeHiddenViews;
	BOOL _includeWindowlessViews;
	BOOL _sorted;
	BOOL _includeAncestorsOfSelfInSiblingMatch;
	BOOL _forSpeakScreen;
	BOOL _shouldIncludeStatusBarWindow;
	long long _direction;
	/*^block*/id _leafNodePredicate;
	NSArray* _allowedViewsForTraversal;
	/*^block*/id _alternateViewChildrenHandler;

}

@property (assign,nonatomic) BOOL forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStatusBarWindow;                           //@synthesize shouldIncludeStatusBarWindow=_shouldIncludeStatusBarWindow - In the implementation block
@property (nonatomic,copy) id alternateViewChildrenHandler;                               //@synthesize alternateViewChildrenHandler=_alternateViewChildrenHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) long long direction;                                         //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeKeyboardObscuredElements;                  //@synthesize shouldIncludeKeyboardObscuredElements=_shouldIncludeKeyboardObscuredElements - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) BOOL includeWindowlessViews;                                 //@synthesize includeWindowlessViews=_includeWindowlessViews - In the implementation block
@property (assign,nonatomic) BOOL sorted;                                                 //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch;                   //@synthesize includeAncestorsOfSelfInSiblingMatch=_includeAncestorsOfSelfInSiblingMatch - In the implementation block
@property (nonatomic,retain) NSArray * allowedViewsForTraversal;                          //@synthesize allowedViewsForTraversal=_allowedViewsForTraversal - In the implementation block
+(id)options;
+(id)defaultVoiceOverOptions;
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg1 honorsGroups:(BOOL)arg2 ;
+(id)defaultMacCatalystPlatformOptions;
+(id)defaultSwitchControlOptions;
+(id)defaultSpeakScreenOptions;
-(id)description;
-(id)init;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(void)setLeafNodePredicate:(id)arg1 ;
-(void)setShouldReturnScannerGroups:(BOOL)arg1 ;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(BOOL)arg1 ;
-(void)setShouldIncludeStatusBarWindow:(BOOL)arg1 ;
-(void)setForSpeakScreen:(BOOL)arg1 ;
-(void)setAllowedViewsForTraversal:(NSArray *)arg1 ;
-(void)setSorted:(BOOL)arg1 ;
-(BOOL)shouldOnlyIncludeElementsWithVisibleFrame;
-(BOOL)shouldReturnScannerGroups;
-(id)leafNodePredicate;
-(BOOL)forSpeakScreen;
-(BOOL)shouldUseAllSubviews;
-(BOOL)shouldIncludeKeyboardObscuredElements;
-(void)setShouldIncludeKeyboardObscuredElements:(BOOL)arg1 ;
-(void)setShouldUseAllSubviews:(BOOL)arg1 ;
-(BOOL)includeHiddenViews;
-(void)setIncludeHiddenViews:(BOOL)arg1 ;
-(BOOL)includeWindowlessViews;
-(void)setIncludeWindowlessViews:(BOOL)arg1 ;
-(BOOL)sorted;
-(BOOL)includeAncestorsOfSelfInSiblingMatch;
-(void)setIncludeAncestorsOfSelfInSiblingMatch:(BOOL)arg1 ;
-(NSArray *)allowedViewsForTraversal;
-(BOOL)shouldIncludeStatusBarWindow;
-(id)alternateViewChildrenHandler;
-(void)setAlternateViewChildrenHandler:(id)arg1 ;
@end

