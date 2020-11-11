/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/__TVShelfViewControllerDelegate.h>
#import <libobjc.A.dylib/TVMediaProviding.h>
#import <libobjc.A.dylib/TVAppTemplateImpressionable.h>

@class TVMediaInfo, IKViewElement, _TVShelfViewController, TVObservableEventController, UIView, NSString;

@interface VUIUpNextBannerViewController : UIViewController <__TVShelfViewControllerDelegate, TVMediaProviding, TVAppTemplateImpressionable> {

	BOOL _firstViewAppearance;
	unsigned long long _host;
	IKViewElement* _viewElement;
	_TVShelfViewController* _shelfViewController;
	TVMediaInfo* _selectedMediaInfo;
	TVObservableEventController* _observableEventController;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) _TVShelfViewController * shelfViewController;                         //@synthesize shelfViewController=_shelfViewController - In the implementation block
@property (nonatomic,retain) TVMediaInfo * selectedMediaInfo;                                      //@synthesize selectedMediaInfo=_selectedMediaInfo - In the implementation block
@property (nonatomic,retain) TVObservableEventController * observableEventController;              //@synthesize observableEventController=_observableEventController - In the implementation block
@property (assign,getter=isFirstViewAppearance,nonatomic) BOOL firstViewAppearance;                //@synthesize firstViewAppearance=_firstViewAppearance - In the implementation block
@property (nonatomic,readonly) unsigned long long host;                                            //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) UIView * visualEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)host;
-(void)removeObserver:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(UIView *)visualEffectView;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(_TVShelfViewController *)shelfViewController;
-(void)setShelfViewController:(_TVShelfViewController *)arg1 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(TVObservableEventController *)observableEventController;
-(TVMediaInfo *)selectedMediaInfo;
-(void)setObservableEventController:(TVObservableEventController *)arg1 ;
-(void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2 ;
-(void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setSelectedMediaInfo:(TVMediaInfo *)arg1 ;
-(id)initWithHost:(unsigned long long)arg1 ;
-(void)updateWithElement:(id)arg1 ;
-(BOOL)isFirstViewAppearance;
-(void)setFirstViewAppearance:(BOOL)arg1 ;
-(id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2 ;
-(id)_focusedMediaInfoForElementAtIndex:(long long)arg1 ;
@end

