/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface PXPeopleNamePickerCell : UITableViewCell {

	UILabel* _titleLabel;
	NSArray* _baseConstraints;

}

@property (nonatomic,retain) NSArray * baseConstraints;                  //@synthesize baseConstraints=_baseConstraints - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(NSArray *)baseConstraints;
-(void)setBaseConstraints:(NSArray *)arg1 ;
@end

