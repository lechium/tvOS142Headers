/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSParallelScan : MPSKernel {

	unsigned _kernelID;
	unsigned _sourceDataType;
	unsigned _destinationDataType;
	int _scanOp;
	unsigned long long _scanImpl;

}

@property (nonatomic,readonly) unsigned sourceDataType;                   //@synthesize sourceDataType=_sourceDataType - In the implementation block
@property (nonatomic,readonly) unsigned destinationDataType;              //@synthesize destinationDataType=_destinationDataType - In the implementation block
@property (assign,nonatomic) unsigned long long scanImpl;                 //@synthesize scanImpl=_scanImpl - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initPrivateWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceDataType:(unsigned)arg2 destinationDataType:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 sourceDataType:(unsigned)arg2 destinationDataType:(unsigned)arg3 scanOp:(int)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6 ;
-(unsigned)sourceDataType;
-(unsigned)destinationDataType;
-(unsigned long long)scanImpl;
-(void)setScanImpl:(unsigned long long)arg1 ;
@end

