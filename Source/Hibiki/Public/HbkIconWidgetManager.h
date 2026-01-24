#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkIconWidgetManager.generated.h"

class UHbkIconWidgetBase;

UCLASS(Blueprintable)
class HIBIKI_API UHbkIconWidgetManager : public UTngGameSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UHbkIconWidgetBase>> IconClassMap;
    
public:
    UHbkIconWidgetManager();

};

