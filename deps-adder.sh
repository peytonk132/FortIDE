#
rm -rf deps
mkdir deps
pushd deps
git clone https://github.com/ocornut/imgui.git; pushd imgui; git checkout v1.91.0; popd
git clone https://github.com/antlr/antlr4.git; pushd antlr4; git checkout 4.13.2; popd
git clone https://github.com/SFML/imgui-sfml.git; pushd imgui-sfml; git checkout v2.6; popd
git clone https://github.com/SFML/SFML.git; pushd SFML; git checkout 2.6.1; popd
git clone https://github.com/nlohmann/json.git; pushd json; git checkout v3.11.3; popd
git clone https://github.com/boostorg/boost.git; pushd boost; git checkout boost-1.86.0; popd

curl https://archives.boost.io/release/1.82.0/source/boost_1_82_0.zip -o boost_1_86_0.zip
popd