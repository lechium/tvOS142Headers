/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLThumbFileManagerCore.h>

@interface PLThumbFileManager : PLThumbFileManagerCore
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 ;
-(BOOL)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2 ;
@end
