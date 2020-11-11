/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLIndirectComputeCommandSPI <MTLIndirectComputeCommand>
@required
-(unsigned long long)getCommandType;
-(unsigned long long)getOptimizedStatus;
-(unsigned long long)getPipelineStateUniqueIdentifier;
-(void*)getKernelBufferAtIndex:(unsigned long long)arg1;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)arg1;
-(SCD_Struct_MT42*)getStageInRegion;
-(BOOL)hasBarrier;
-(id)getImageBlockSize;

@end

