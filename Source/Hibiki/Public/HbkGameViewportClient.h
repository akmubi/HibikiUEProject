#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "HbkGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UHbkGameViewportClient();

};

