#include "mm_buffer.h"

MinimapBuffer::MinimapBuffer()
        : _buffer(mm_tbuf_init())
{}

MinimapBuffer::~MinimapBuffer()
{
    mm_tbuf_destroy(_buffer);
}

mm_tbuf_t* MinimapBuffer::get() const
{
    return _buffer;
}