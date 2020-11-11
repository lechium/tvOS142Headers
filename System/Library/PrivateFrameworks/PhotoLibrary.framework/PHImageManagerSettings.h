/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PHSettings.h>

@interface PHImageManagerSettings : PHSettings {

	BOOL _allowImageRequests;
	BOOL _allowCaching;

}

@property (assign,nonatomic) BOOL allowImageRequests;              //@synthesize allowImageRequests=_allowImageRequests - In the implementation block
@property (assign,nonatomic) BOOL allowCaching;                    //@synthesize allowCaching=_allowCaching - In the implementation block
+(id)settingsControllerModule;
+(id)sharedSettings;
-(void)setDefaultValues;
-(id)parentSettings;
-(BOOL)allowImageRequests;
-(void)setAllowImageRequests:(BOOL)arg1 ;
-(BOOL)allowCaching;
-(void)setAllowCaching:(BOOL)arg1 ;
@end

