/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsXPC.h>

@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC
+(BOOL)supportsSecureCoding;
-(BOOL)isWritableFormat;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage> >*)createDiskImage;
-(unsigned long long)numBlocks;
@end

