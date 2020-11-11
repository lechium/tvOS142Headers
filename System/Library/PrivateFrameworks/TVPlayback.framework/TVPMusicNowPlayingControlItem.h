/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVPRoundButton, NSMutableDictionary, UIImage;

@interface TVPMusicNowPlayingControlItem : NSObject {

	BOOL _selected;
	TVPRoundButton* _buttonView;
	NSMutableDictionary* _imageDictionary;
	long long _type;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
+(id)_accessQueue;
+(id)controlItemWithImage:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)contextControlItem;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)buttonView;
-(id)imageForControlState:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forControlState:(unsigned long long)arg2 ;
@end
