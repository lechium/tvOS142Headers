/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MPSMatrixDescriptor : NSObject {

	unsigned long long _rows;
	unsigned long long _columns;
	unsigned long long _matrices;
	unsigned long long _rowBytes;
	unsigned long long _matrixBytes;
	unsigned _dataType;

}

@property (assign,nonatomic) unsigned long long rows;                       //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) unsigned long long columns;                    //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) unsigned long long matrices;                 //@synthesize matrices=_matrices - In the implementation block
@property (assign,nonatomic) unsigned dataType;                             //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) unsigned long long rowBytes;                   //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long matrixBytes;              //@synthesize matrixBytes=_matrixBytes - In the implementation block
+(unsigned long long)rowBytesForColumns:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(unsigned long long)rowBytesFromColumns:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
+(id)matrixDescriptorWithDimensions:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned)arg4 ;
+(id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned)arg4 ;
+(id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 matrices:(unsigned long long)arg3 rowBytes:(unsigned long long)arg4 matrixBytes:(unsigned long long)arg5 dataType:(unsigned)arg6 ;
-(id)init;
-(unsigned)dataType;
-(void)setDataType:(unsigned)arg1 ;
-(unsigned long long)columns;
-(unsigned long long)rows;
-(unsigned long long)matrices;
-(unsigned long long)rowBytes;
-(unsigned long long)matrixBytes;
-(void)setRows:(unsigned long long)arg1 ;
-(void)setColumns:(unsigned long long)arg1 ;
-(void)setRowBytes:(unsigned long long)arg1 ;
@end

