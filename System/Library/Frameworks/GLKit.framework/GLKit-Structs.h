/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct {
	float x;
	float y;
	float z;
	float w;
} SCD_Struct_GL0;

typedef union GLKVector4 {
	SCD_Struct_GL0 field1;
	SCD_Struct_GL0 field2;
	SCD_Struct_GL0 field3;
	float v[4];
} GLKVector4;

typedef struct GLKBigInt_s {
	unsigned long long n0;
	unsigned long long n1;
} GLKBigInt_s;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_GL4;

typedef union GLKVector3 {
	SCD_Struct_GL4 field1;
	SCD_Struct_GL4 field2;
	SCD_Struct_GL4 field3;
	float v[3];
} GLKVector3;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m03;
	float m10;
	float m11;
	float m12;
	float m13;
	float m20;
	float m21;
	float m22;
	float m23;
	float m30;
	float m31;
	float m32;
	float m33;
} SCD_Struct_GL6;

typedef union GLKMatrix4 {
	SCD_Struct_GL6 field1;
	float m[16];
} GLKMatrix4;

typedef struct {
	float m00;
	float m01;
	float m02;
	float m10;
	float m11;
	float m12;
	float m20;
	float m21;
	float m22;
} SCD_Struct_GL8;

typedef union GLKMatrix3 {
	SCD_Struct_GL8 field1;
	float m[9];
} GLKMatrix3;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct CGImage* CGImageRef;

typedef struct CGImageProvider* CGImageProviderRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

