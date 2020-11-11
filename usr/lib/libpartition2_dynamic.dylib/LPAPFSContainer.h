/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libpartition2_dynamic.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSContainer : LPMedia
+(id)allAPFSContainers;
+(id)diagsContainer;
+(id)supportedContentTypes;
-(id)updateVolume;
-(id)volumesWithRole:(int)arg1 ;
-(id)addVolumeWithName:(id)arg1 role:(int)arg2 caseSensitive:(BOOL)arg3 reserveSize:(long long)arg4 quotaSize:(long long)arg5 pairedVolume:(id)arg6 error:(id*)arg7 ;
-(id)physicalStores;
-(id)prebootVolume;
-(id)recoveryVolume;
-(id)volumes;
@end
