/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface VSCredentialEntryPicker : NSObject {

	NSString* _title;
	NSArray* _pickerItems;
	long long _selectedIndex;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * pickerItems;                  //@synthesize pickerItems=_pickerItems - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(long long)selectedIndex;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(id)pickerItemAtCurrentIndex;
@end

