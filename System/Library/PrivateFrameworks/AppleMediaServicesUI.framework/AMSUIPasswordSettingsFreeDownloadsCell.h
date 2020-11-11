/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol AMSUIPasswordSettingsFreeDownloadsCellDelegate;
@class UISwitch;

@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell {

	id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> _delegate;
	UISwitch* _toggle;

}

@property (assign,nonatomic) id<AMSUIPasswordSettingsFreeDownloadsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISwitch * toggle;                                                        //@synthesize toggle=_toggle - In the implementation block
-(id<AMSUIPasswordSettingsFreeDownloadsCellDelegate>)delegate;
-(void)setDelegate:(id<AMSUIPasswordSettingsFreeDownloadsCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)toggle;
-(void)setToggle:(UISwitch *)arg1 ;
-(void)layoutSubviews;
-(long long)selectionStyle;
-(void)toggleChanged:(id)arg1 ;
@end

