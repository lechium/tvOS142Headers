/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UISearchBarTextField, UIView, _UINavigationControllerPalette, UISearchController;


@protocol _UISearchBarVisualProvidingDelegate <NSObject>
@property (assign,nonatomic,__weak) id<UISearchBarDelegate><UISearchBarDelegate_Private> delegate; 
@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (nonatomic,readonly) UIView * _viewForChildViews; 
@property (nonatomic,readonly) _UINavigationControllerPalette * _containingNavigationPalette; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) UISearchController * _searchController; 
@property (nonatomic,readonly) long long _expectedInterfaceOrientation; 
@property (nonatomic,readonly) BOOL _effectivelySupportsDynamicType; 
@property (nonatomic,readonly) Class _classForSearchTextField; 
@required
-(id<UISearchBarDelegate><UISearchBarDelegate_Private>)delegate;
-(void)setDelegate:(id)arg1;
-(id)textInputTraits;
-(UISearchController *)_searchController;
-(long long)barPosition;
-(id)_searchBarTextField;
-(long long)_expectedInterfaceOrientation;
-(BOOL)_effectivelySupportsDynamicType;
-(UIView *)_viewForChildViews;
-(_UINavigationControllerPalette *)_containingNavigationPalette;
-(Class)_classForSearchTextField;

@end
