/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMIDI/CoreMIDI-Structs.h>
@interface MIDICIDiscoveryManager : NSObject {

	unsigned _mClient;
	/*^block*/id _mResponseBlock;

}

@property (nonatomic,copy) id responseBlock;              //@synthesize mResponseBlock=_mResponseBlock - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(int)setupManager;
-(void)discoverWithHandler:(/*^block*/id)arg1 ;
-(int)createClient;
-(id)handleNotification:(const MIDINotification*)arg1 ;
-(void)debugPrintMessage;
-(void)discover;
@end
