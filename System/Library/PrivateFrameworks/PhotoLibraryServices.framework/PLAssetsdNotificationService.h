/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdNotificationServiceProtocol.h>

@class NSString;

@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService <PLAssetsdNotificationServiceProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg1 ;
-(void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1 ;
-(void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2 ;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
-(void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1 ;
-(void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 ;
@end

