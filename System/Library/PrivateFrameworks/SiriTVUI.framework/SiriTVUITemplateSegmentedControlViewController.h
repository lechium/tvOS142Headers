/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUITemplateItemViewController.h>

@class NSDictionary, SiriTVUITemplateSegmentedControlView, SiriTVUISegmentedControlTemplateItem;

@interface SiriTVUITemplateSegmentedControlViewController : SiriTVUITemplateItemViewController {

	NSDictionary* _selectedTextColors;

}

@property (nonatomic,retain) SiriTVUITemplateSegmentedControlView * view; 
@property (nonatomic,retain) SiriTVUISegmentedControlTemplateItem * templateItem; 
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateContentForTraitCollection:(id)arg1 ;
-(void)_itemSelected:(id)arg1 ;
-(id)_selectedTextColorsForTextColors:(id)arg1 ;
-(id)_selectedTitleTextAttributesForUserIntefaceStyle:(long long)arg1 ;
@end

