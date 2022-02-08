#include "RPTypes.h"
#include "vertex.h"

class Triangle {
    public:
        int3* index;
        
        bool showBothFaces;

        float3 coeffMapping(float3 pixel) const;
        float3 getNorm() const;

    private:
        float3 norm;

        void computeNorm();
        void clip();
};