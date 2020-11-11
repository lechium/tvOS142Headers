/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSSmartSiriVolumeControllerDelegate.h>

@class CSSmartSiriVolumeController, NSString;

@interface ANVolumeController : NSObject <CSSmartSiriVolumeControllerDelegate> {

	CSSmartSiriVolumeController* _smartSiriVolumeController;

}

@property (nonatomic,retain) CSSmartSiriVolumeController * smartSiriVolumeController;              //@synthesize smartSiriVolumeController=_smartSiriVolumeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTTSVolumeChange:(id)arg1 forReason:(unsigned long long)arg2 ;
-(float)smartSiriVolume;
-(CSSmartSiriVolumeController *)smartSiriVolumeController;
-(void)setSmartSiriVolumeController:(CSSmartSiriVolumeController *)arg1 ;
@end

