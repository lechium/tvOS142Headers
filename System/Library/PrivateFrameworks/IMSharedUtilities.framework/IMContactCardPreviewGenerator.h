/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)UTITypes;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
+(id)vCardDataForURL:(id)arg1 ;
+(BOOL)supportsBlastDoor;
+(CGImageRef)newMonogramImageForData:(id)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(double)contactMonogramDiameter;
+(CGImageRef)newContactCardPreviewFrom:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
+(id)contactCardPreviewPayloadsDirectoryFrom:(id)arg1 previewURL:(id)arg2 ;
+(id)contactCardPreviewPayloadFileURLFrom:(id)arg1 previewURL:(id)arg2 withFileExtension:(id)arg3 ;
+(CGImageRef)monogramForFirstName:(id)arg1 lastName:(id)arg2 ;
+(id)generateContactPlistFrom:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
@end

