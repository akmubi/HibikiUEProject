#include "HbkCopyBackBuffer.h"

UHbkCopyBackBuffer::UHbkCopyBackBuffer() {
    this->UpdateEveryFrameRT = NULL;
    this->UpdateOnlyThisFrameRT = NULL;
}

bool UHbkCopyBackBuffer::IsUpdateThisFrame() const {
    return false;
}

bool UHbkCopyBackBuffer::IsUpdateOnlyThisFrame() const {
    return false;
}

bool UHbkCopyBackBuffer::IsAvailableUpdateOnlyThisFrameRT() const {
    return false;
}

UTextureRenderTarget2D* UHbkCopyBackBuffer::GetUpdateOnlyThisFrameRT() const {
    return NULL;
}

UTextureRenderTarget2D* UHbkCopyBackBuffer::GetUpdateEveryFrameRT() const {
    return NULL;
}


