/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class UILabel, NSString;

@interface TVErrorViewController : UIViewController {

	UILabel* _headerLabel;
	UILabel* _errorMessageLabel;
	NSString* _headerTitle;
	NSString* _errorMessage;

}

@property (nonatomic,copy) NSString * headerTitle;               //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSString *)errorMessage;
-(void)loadView;
-(void)setErrorMessage:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateColors;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

