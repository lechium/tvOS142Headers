//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MIBOMWrapper : NSObject
{
}

+ (_Bool)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id *)arg3 extractionProgressBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000158cc
+ (_Bool)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010001584c
+ (_Bool)_countFilesAndBytesInArchiveAtURL:(id)arg1 withBOMCopier:(struct _BOMCopier *)arg2 totalFiles:(unsigned long long *)arg3 totalUncompressedBytes:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x0000000100015730

@end

