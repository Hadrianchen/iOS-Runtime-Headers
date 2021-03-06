/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {
    unsigned long long _bytesWritten;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _canWriteDataBlock;

    BOOL _closeOnStop;
    BOOL _compressed;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didEncounterErrorBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didFinishWritingBlock;

    NSInputStream *_inputStream;
    unsigned int _maximumBufferSize;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_queue;
    double _timestamp;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } *_zstreamp;
}

@property unsigned long long bytesWritten;
@property(copy) id canWriteDataBlock;
@property(getter=isCompressed) BOOL compressed;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id didEncounterErrorBlock;
@property(copy) id didFinishWritingBlock;
@property(readonly) unsigned int hash;
@property(retain) NSInputStream * inputStream;
@property unsigned int maximumBufferSize;
@property(retain) NSOutputStream * outputStream;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(readonly) Class superclass;
@property double timestamp;

- (void).cxx_destruct;
- (id)_decompressData:(id)arg1;
- (unsigned long long)bytesWritten;
- (id)canWriteDataBlock;
- (void)dealloc;
- (id)didEncounterErrorBlock;
- (id)didFinishWritingBlock;
- (id)init;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)inputStream;
- (BOOL)isCompressed;
- (unsigned int)maximumBufferSize;
- (id)outputStream;
- (id)queue;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setCanWriteDataBlock:(id)arg1;
- (void)setCompressed:(BOOL)arg1;
- (void)setDidEncounterErrorBlock:(id)arg1;
- (void)setDidFinishWritingBlock:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setMaximumBufferSize:(unsigned int)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)start;
- (void)stop;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (double)timestamp;
- (BOOL)writeAllData:(id)arg1 error:(id*)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(id)arg2;
- (void)writeStreamError:(struct { int x1; int x2; })arg1;

@end
