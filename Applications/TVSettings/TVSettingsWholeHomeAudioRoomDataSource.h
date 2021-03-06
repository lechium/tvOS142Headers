//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TVCSHome;
@protocol TVSettingsWholeHomeAudioRoomDataSourceDelegate;

@interface TVSettingsWholeHomeAudioRoomDataSource : NSObject
{
    TVCSHome *_home;	// 8 = 0x8
    id <TVSettingsWholeHomeAudioRoomDataSourceDelegate> _delegate;	// 16 = 0x10
    NSArray *_existingRooms;	// 24 = 0x18
    NSArray *_suggestedRoomNames;	// 32 = 0x20
}

+ (id)new;	// IMP=0x00000001000de690
- (void).cxx_destruct;	// IMP=0x00000001000def20
@property(retain, nonatomic) NSArray *suggestedRoomNames; // @synthesize suggestedRoomNames=_suggestedRoomNames;
@property(retain, nonatomic) NSArray *existingRooms; // @synthesize existingRooms=_existingRooms;
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioRoomDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVCSHome *home; // @synthesize home=_home;
- (void)_update;	// IMP=0x00000001000dec40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000deb7c
@property(readonly, nonatomic) _Bool canBeRemovedFromHome;
- (void)dealloc;	// IMP=0x00000001000de7d8
- (id)initWithHome:(id)arg1;	// IMP=0x00000001000de6ec
- (id)init;	// IMP=0x00000001000de6b4

@end

